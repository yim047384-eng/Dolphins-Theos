//
//  CheatBotuuid.m
//  iBOT
//
//  Created by Lol on 12/11/23.
//

#import "CheatBotuuid.h"
#import <Security/Security.h>

@implementation KeychainUtility

+ (NSString *)getPersistentUUID {

        NSString *serviceName = [[NSBundle mainBundle] bundleIdentifier];
        NSString *accountName = @"com.pubg.imobile";

        // Check if the UUID is already stored in the keychain
        NSDictionary *query = @{
            (__bridge id)kSecClass: (__bridge id)kSecClassGenericPassword,
            (__bridge id)kSecAttrService: serviceName,
            (__bridge id)kSecAttrAccount: accountName,
            (__bridge id)kSecReturnData: @YES
        };

        CFDataRef result = NULL;
        OSStatus status = SecItemCopyMatching((__bridge CFDictionaryRef)query, (CFTypeRef *)&result);

        if (status == errSecSuccess && result != NULL) {
            NSData *uuidData = (__bridge_transfer NSData *)result;
            NSString *uuid = [[NSString alloc] initWithData:uuidData encoding:NSUTF8StringEncoding];
            return uuid;
        }

        // If no UUID found, generate a new one and store it in the keychain
        NSString *newUUID = [[NSUUID UUID] UUIDString];
        NSData *newUUIDData = [newUUID dataUsingEncoding:NSUTF8StringEncoding];

        NSDictionary *attributes = @{
            (__bridge id)kSecClass: (__bridge id)kSecClassGenericPassword,
            (__bridge id)kSecAttrService: serviceName,
            (__bridge id)kSecAttrAccount: accountName,
            (__bridge id)kSecValueData: newUUIDData
        };

        status = SecItemAdd((__bridge CFDictionaryRef)attributes, NULL);

        if (status == errSecSuccess) {
            return newUUID;
        } else {
            // Handle error
            return nil;
        }
    

}
@end
