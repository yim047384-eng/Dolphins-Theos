
#include <cstdio>
#include <string>
#include <fstream>
#include <utility>
#include <thread>
#import <UIKit/UIKit.h>

#import "CheatBotuuid.h"
#include "RSA.h"

#import "../includes/SCLAlertView/SCLAlertView.h"
#import "../includes/SSZipArchive/ZipArchive.h"

#include "AlertUtils.h"
#include "DumpTransferUI.h"

DumpTransferUI *dumpTransferUI = nil;

#include "../includes/hash/hash.h"
#include "Core/Dumper.hpp"

#import <CommonCrypto/CommonCryptor.h>
#import <CommonCrypto/CommonKeyDerivation.h>
#import <CommonCrypto/CommonHMAC.h>


#define WAIT_TIME_SEC 15
#define DUMP_FOLDER NSSENCRYPT("CHEATBOT_DUMP")

#include "Core/GameProfiles/Apex.hpp"
#include "Core/GameProfiles/DBD.hpp"
#include "Core/GameProfiles/ARK.hpp"
#include "Core/GameProfiles/PUBGM.hpp"
#include "Core/GameProfiles/PES.hpp"
#include "Core/GameProfiles/Distyle.hpp"
#include "Core/GameProfiles/Farlight.hpp"

std::string fixv;
std::string fixn;

std::string mygame;

NSString *privkey = @"-----BEGIN PRIVATE KEY-----\nMIIEvwIBADANBgkqhkiG9w0BAQEFAASCBKkwggSlAgEAAoIBAQDs3oRLX5nNmEdH\ntx9Ujg2SwbpCWrMBepn0yria7LpZrOZvhqwlGYTZkz9qISOolhJovct2AlQGhTOt\nNh9lGe/kJAA5SsuiMvJsBbDiIpA7daS++iIeBtrpVNAja5+CFvQKX1UzwFB9E+r+\nLqJWCKSQX8ayPTxrO0Ff+iX279AXgJs9Y2jAZbdfmTYe24Ed71vIzkZpIM/t9xEv\npITtnfJvbNii25iFGGKBJHZNv+eqtgBUOlgK81CaHx8N1ZHCIcjsMjvFm+sfKS3Z\nARRLtMmFsYdooTuVjN/HOX9P/IREWA6NbUXOUpPTdSbEJA3ZJF//2gdVTCWVZZ2n\n0dQiIuNfAgMBAAECggEACx/wSrH0wUkzn9Sj7g616HycyN0Fpz4g2PRkczJHFkse\nj4Jdt2hZavaVdeCUkihqOO0hDyvQ0nWTFcGC+/aZ47clI4u1wKpv5E7oHdbNu10t\nHaMV0x8zTN4k4GT/mtaFI6+SitmvbhBvavy5txy0zesRo/FoUwj3axCOk+hzd4cF\noFq7Lgevo7m3liOkSzOjHbfRbmEzWQpE28H5s57W1gZ1hafl1NVOvyiW1NRfZPN6\nc/xl03RN7JdPKkJPN1VaheH/6NGvFRnPaj4YPYqpHGmWHKGGnNxr7RsDoQipDN7y\ngVPkIJhNLcVLo9xEClc4EwwzUQEzc0wxVi2ZyuhskQKBgQD8FS6lw8sCTD2PB3Ar\n35Xdc2la+lq4/jka4tmqQdrXwvbdEexfiBGvX18WFJIL92J9AcrQXuJP4mekDwdf\n6qpT00MTIwIhQqWY1b0kuKjG13D0Zq78yi/3vgDLqluIfmkv/NesYMCL4QEJTZ8L\n5NFPJSEGloQjdMQhJu48CxE/6wKBgQDwjNAp45S/GuWbdaIF/qV8OYmV6qVXyi5A\nUeEwXt4DevMb/kTuaA44VTnQ4pTOHeDz+t5+3kpxQa2FLZdYdnEl+3LAmnva7efX\n4LUCEY7d/wlOH8Bn2T/lvx8GJgVH1JJE15RQXREijkbAtubTKXL4DBpy6/uz58WH\nnhZUrexBXQKBgQDgAAKfkkhHFnBtNHLcyaVmTzQDgAw17tHXrlU1EafhqoGrGE4u\n5b6xU9Iu0MCmmYGPC5SpbGc2DT2Db0diWCharJQh4S33WD3GfcfBZcW0S6U3yDce\nspvFTbVvRUZpF8totQkBSEhRA/PjzHHUI9RKu/eI3x80UoIl4243NK5zWQKBgQDu\nWBfJ6Z1w3Y2zw5KOrgn6VGhnCuBZZBL/2CFwdA83E5PeoMpcDu5IEun+dwNKV4CV\nPnVG76qDHbh4xPu4w2LJZ6QEAw3FlwSpehTfv9X3UMQ/jGZwf2o4km6DARkqWw2y\n+IgUOKLJwn+IY7HCeMdZz2RFil0TnQqznYgyz0HQYQKBgQDbJfAJ1MpgHbpQfSaF\nH9QcOno951lJDYVaZh96+/p8HWSyKL0xhD4a1eEQj+8DuCZYJ2ySQNQI5BM0cLmO\nKbFuQAGGR/MgL1JoYxdStP6S7AMIIKrnjRZcWyq5WJl1mr2PdmGsMKr94dVuNCaH\nPwMr8Yj3iE+KeZFd+6GrsaaXIg==\n-----END PRIVATE KEY-----";

// DumpArgs
// 1 string dump_dir, 2 string dump_headers_dir (App documents folder)
// 3 bool dump_objects, 4 bool dump_full, 5 bool dump_headers, 6 bool gen_functions_script;
  
static std::pair<Dumper::DumpArgs, IGameProfile *> UE_Games[]
{
    {{{}, {}, true, true, true, true},
     new ApexProfile()},

    {{{}, {}, true, true, true, true},
     new DBDProfile()},

    {{{}, {}, true, true, true, true},
     new ArkProfile()},

    {{{}, {}, true, true, true, true},
     new PUBGMProfile()},

    {{{}, {}, true, true, true, true},
     new PESProfile()},

    {{{}, {}, true, true, true, true},
     new DistyleProfile()},
    
    {{{}, {}, true, true, true, true},
     new FarlightProfile()},
};


void *botxd(void *);


@interface NSObject (CheatBot)


@end

@implementation NSObject (CheatBot)

NSString *xrpb = NSSENCRYPT("Paste your Key here!");



NSString *cheatbotStyle() {
    NSMutableString *keekee = [NSMutableString stringWithCapacity:26];
    NSString *characters = NSSENCRYPT("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

    for (int i = 0; i < 26; i++) {
        [keekee appendFormat:@"%C", [characters characterAtIndex:arc4random_uniform((uint32_t)[characters length])]];
    }

    return keekee;
}

+ (void)load{
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        
 
        NSUserDefaults *check;
        check = [NSUserDefaults standardUserDefaults];
        [check setObject:cheatbotStyle() forKey:NSSENCRYPT("myenc")];
        
        [check setObject:xrpb forKey:NSSENCRYPT("msj")];
        [check synchronize];
        [self load1];
        
    });
}


-(void)load1
{
  


dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
  //  [self login];
  [self sucsses];
  

});
}



-(void)sucsses
{
 
    
    NSUserDefaults *check;
        check = [NSUserDefaults standardUserDefaults];
        NSString *loggedin = [check stringForKey:NSSENCRYPT("loggedin")];
        NSString *key = [check stringForKey:NSSENCRYPT("key")];
    NSString *uuid = [KeychainUtility getPersistentUUID];
        NSString *cheatbotstp = NSSENCRYPT("FREE");
    NSString *token = [check stringForKey:NSSENCRYPT("myenc")];
    NSError *errorAgentData;
    key=[NSString stringWithFormat:@"%@",key];
        char* keylogin = (char*) [key cStringUsingEncoding:NSUTF8StringEncoding];
    
    
    NSString *urlString = NSSENCRYPT("https://botxd.online/connect");
    
    NSString *bodyString = [NSString stringWithFormat:@"game=%@&udid=%@&key=%@&myenc=%@",cheatbotstp, uuid, key, token];
    NSData *bodyData = [bodyString dataUsingEncoding:NSUTF8StringEncoding];

    NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:urlString]];
    [request setHTTPMethod:NSSENCRYPT("POST")];
    [request setValue:@"application/x-www-form-urlencoded" forHTTPHeaderField:@"Content-Type"];
    [request setHTTPBody:bodyData];

    NSError *error = nil;
    NSData *responseData = [NSURLConnection sendSynchronousRequest:request returningResponse:nil error:&error];

    if (error) {
       showError(NSSENCRYPT("There is an issue\nError Code : -657\nContact Admin"));
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            exit(0);
    });
          
        }
      else {
          NSString *encrypted = [[NSString alloc] initWithData:responseData encoding:NSUTF8StringEncoding];
          NSData *DCxs = [encrypted dataUsingEncoding:NSUTF8StringEncoding];
          NSDictionary *CHEATBOT = [NSJSONSerialization JSONObjectWithData:DCxs options:kNilOptions error:&error];
          NSString *CheatBotOP = [CHEATBOT objectForKey:NSSENCRYPT("CheatBot_Owner")];
          NSString *decrypted = [RSA decryptString:CheatBotOP privateKey:privkey];
          NSData *DCs = [decrypted dataUsingEncoding:NSUTF8StringEncoding];
          NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:DCs options:kNilOptions error:&error];
          
        NSString *authStatus = [JSON objectForKey:NSSENCRYPT("status")];
        NSString *uuidRes = [JSON objectForKey:NSSENCRYPT("uuid")];
        NSString *uuidResb = [JSON objectForKey:NSSENCRYPT("endtime")];
        NSString *reason = [JSON objectForKey:NSSENCRYPT("reason")];
          
          NSString *tokenres = [JSON objectForKey:NSSENCRYPT("token")];
          
        [check setObject:authStatus forKey:NSSENCRYPT("status")];
        [check setObject:uuidRes forKey:NSSENCRYPT("uuid")];
        [check setObject:uuidResb forKey:NSSENCRYPT("endtime")];
        [check setObject:reason forKey:NSSENCRYPT("reason")];
          [check setObject:tokenres forKey:NSSENCRYPT("phplogo")];
        [check synchronize];
    
    }
    static dispatch_once_t once;
    dispatch_once(&once, ^{
      NSLog(NSSENCRYPT("======= I'm Loaded ========"));
      pthread_t pthread;
      pthread_create(&pthread, nullptr, botxd, nullptr);
    });
    [self checkcrack];
}




-(void)wrong
{
   
    [self login];
    
}





-(void)checkcrack
{
#define timer(sec) dispatch_after(dispatch_time(DISPATCH_TIME_NOW, sec * NSEC_PER_SEC), dispatch_get_main_queue(), ^
    
    
    timer(300) {
        [self crash];
    });
    
    
    timer(600) {
        [self crash];
    });
    
    timer(1200) {
        [self crash];
    });
    
    
    
}








-(void)crash
{
    
    
    
    
#define timer(sec) dispatch_after(dispatch_time(DISPATCH_TIME_NOW, sec * NSEC_PER_SEC), dispatch_get_main_queue(), ^
    NSUserDefaults *check;
    check = [NSUserDefaults standardUserDefaults];
    NSString *key = [check stringForKey:NSSENCRYPT("key")];
    NSString *token = [check stringForKey:NSSENCRYPT("myenc")];
    timer(0) {
        
        NSString *uuid = [KeychainUtility getPersistentUUID];
        NSError *errorAgentData;
        
            NSString *cheatbotstp = NSSENCRYPT("FREE");
        NSString *urlString = NSSENCRYPT("https://botxd.online/connect");
        NSString *bodyString = [NSString stringWithFormat:@"game=%@&udid=%@&key=%@&myenc=%@",cheatbotstp, uuid, key, token];
        NSData *bodyData = [bodyString dataUsingEncoding:NSUTF8StringEncoding];

        NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:urlString]];
        [request setHTTPMethod:@"POST"];
        [request setValue:@"application/x-www-form-urlencoded" forHTTPHeaderField:@"Content-Type"];
        [request setHTTPBody:bodyData];

        NSError *error = nil;
        NSData *responseData = [NSURLConnection sendSynchronousRequest:request returningResponse:nil error:&error];

        if (error) {
        showError(NSSENCRYPT("There is an issue\nError Code : -657\nContact Admin"));
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                exit(0);
        });
        } else {
            NSString *encrypted = [[NSString alloc] initWithData:responseData encoding:NSUTF8StringEncoding];
            NSData *DCxs = [encrypted dataUsingEncoding:NSUTF8StringEncoding];
            NSDictionary *CHEATBOT = [NSJSONSerialization JSONObjectWithData:DCxs options:kNilOptions error:&error];
            NSString *CheatBotOP = [CHEATBOT objectForKey:NSSENCRYPT("CheatBot_Owner")];
            NSString *decrypted = [RSA decryptString:CheatBotOP privateKey:privkey];
            NSData *DCs = [decrypted dataUsingEncoding:NSUTF8StringEncoding];
            NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:DCs options:kNilOptions error:&error];
            
            NSString *authStatus = [JSON objectForKey:NSSENCRYPT("status")];
            NSString *uuidRes = [JSON objectForKey:NSSENCRYPT("uuid")];
            NSString *uuidResb = [JSON objectForKey:NSSENCRYPT("endtime")];
            NSString *reason = [JSON objectForKey:NSSENCRYPT("reason")];
            NSString *tokenres = [JSON objectForKey:NSSENCRYPT("token")];
            
        if ([authStatus isEqualToString:NSSENCRYPT("true")] && [uuidRes isEqualToString:uuid] && [tokenres isEqualToString:token]) {
            
        }else{
          timer(10) {
              showError(NSSENCRYPT("Unexpected Things Happened\nError Code : -882\nApp will be Crashed"));
              dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                  exit(0);
          });
            });
        }
        }
    }
    );
}






-(void)thongbao
{
 
    NSUserDefaults *check;
        check = [NSUserDefaults standardUserDefaults];
        NSString *loggedin = [check stringForKey:NSSENCRYPT("loggedin")];
        NSString *key = [check stringForKey:NSSENCRYPT("key")];
    NSString *token = [check stringForKey:NSSENCRYPT("myenc")];
    NSString *uuid = [KeychainUtility getPersistentUUID];
        NSString *cheatbotstp = NSSENCRYPT("FREE");
        NSError *errorAgentData;
    key=[NSString stringWithFormat:@"%@",key];
        char* keylogin = (char*) [key cStringUsingEncoding:NSUTF8StringEncoding];
    
    
    NSString *urlString = NSSENCRYPT("https://botxd.online/connect");
    NSString *bodyString = [NSString stringWithFormat:@"game=%@&udid=%@&key=%@&myenc=%@",cheatbotstp, uuid, key, token];
    NSData *bodyData = [bodyString dataUsingEncoding:NSUTF8StringEncoding];

    NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:urlString]];
    [request setHTTPMethod:@"POST"];
    [request setValue:@"application/x-www-form-urlencoded" forHTTPHeaderField:@"Content-Type"];
    [request setHTTPBody:bodyData];

    NSError *error = nil;
    NSData *responseData = [NSURLConnection sendSynchronousRequest:request returningResponse:nil error:&error];

    if (error) {
        showError(NSSENCRYPT("There is an issue\nError Code : -657\nContact Admin"));
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            exit(0);
    });
    } else {
        NSString *encrypted = [[NSString alloc] initWithData:responseData encoding:NSUTF8StringEncoding];
        NSData *DCxs = [encrypted dataUsingEncoding:NSUTF8StringEncoding];
        NSDictionary *CHEATBOT = [NSJSONSerialization JSONObjectWithData:DCxs options:kNilOptions error:&error];
        NSString *CheatBotOP = [CHEATBOT objectForKey:NSSENCRYPT("CheatBot_Owner")];
        NSString *decrypted = [RSA decryptString:CheatBotOP privateKey:privkey];
        NSData *DCs = [decrypted dataUsingEncoding:NSUTF8StringEncoding];
        NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:DCs options:kNilOptions error:&error];
        NSString *status = [JSON objectForKey:NSSENCRYPT("status")];
       
        [check setObject:status forKey:@"status"];
       
    
    
    if ([status isEqualToString:@"false"]) {
        showError(NSSENCRYPT("Our servers are currently undergoing\nmaintenance to enhance your experience.\nWe apologize for any inconvenience.\nPlease try again later."));
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            exit(0);
    });
    }else {
       
        
    }
    }
    
}



- (void)login

{
#define timer(sec) dispatch_after(dispatch_time(DISPATCH_TIME_NOW, sec * NSEC_PER_SEC), dispatch_get_main_queue(), ^
     
    NSUserDefaults *check;
    check = [NSUserDefaults standardUserDefaults];
    
    
    NSString *loggedin = [check stringForKey:NSSENCRYPT("loggedin")];
    NSString *key = [check stringForKey:NSSENCRYPT("key")];
    NSString *token = [check stringForKey:NSSENCRYPT("myenc")];
    
    
    timer(0) {
        if([loggedin isEqualToString:@"1"]) {
            
            
            NSString *uuid = [KeychainUtility getPersistentUUID];
            NSError *errorAgentData;
            
                NSString *cheatbotstp = NSSENCRYPT("FREE");

            NSString *urlString = NSSENCRYPT("https://botxd.online/connect");
            NSString *bodyString = [NSString stringWithFormat:@"game=%@&udid=%@&key=%@&myenc=%@",cheatbotstp, uuid, key, token];
            NSData *bodyData = [bodyString dataUsingEncoding:NSUTF8StringEncoding];

            NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:urlString]];
            [request setHTTPMethod:@"POST"];
            [request setValue:@"application/x-www-form-urlencoded" forHTTPHeaderField:@"Content-Type"];
            [request setHTTPBody:bodyData];

            NSError *error = nil;
            NSData *responseData = [NSURLConnection sendSynchronousRequest:request returningResponse:nil error:&error];

            if (error) {
                showError(NSSENCRYPT("There is an issue\nError Code : -657\nContact Admin"));
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                    exit(0);
            });
            } else {
                NSString *encrypted = [[NSString alloc] initWithData:responseData encoding:NSUTF8StringEncoding];
                NSData *DCxs = [encrypted dataUsingEncoding:NSUTF8StringEncoding];
                NSDictionary *CHEATBOT = [NSJSONSerialization JSONObjectWithData:DCxs options:kNilOptions error:&error];
                NSString *CheatBotOP = [CHEATBOT objectForKey:NSSENCRYPT("CheatBot_Owner")];
                NSString *decrypted = [RSA decryptString:CheatBotOP privateKey:privkey];
                NSData *DCs = [decrypted dataUsingEncoding:NSUTF8StringEncoding];
                NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:DCs options:kNilOptions error:&error];
                
                NSString *authStatus = [JSON objectForKey:NSSENCRYPT("status")];
                NSString *uuidRes = [JSON objectForKey:NSSENCRYPT("uuid")];
                NSString *uuidResb = [JSON objectForKey:NSSENCRYPT("endtime")];
                NSString *reason = [JSON objectForKey:NSSENCRYPT("reason")];
                NSString *seller = [JSON objectForKey:NSSENCRYPT("seller")];
                NSString *tokenres = [JSON objectForKey:NSSENCRYPT("token")];
                
                
                [check setObject:authStatus forKey:NSSENCRYPT("status")];
                [check setObject:uuidRes forKey:NSSENCRYPT("endtime")];
                [check setObject:uuidResb forKey:NSSENCRYPT("endtime")];
                [check setObject:reason forKey:NSSENCRYPT("reason")];
                [check setObject:seller forKey:NSSENCRYPT("seller")];
                [check synchronize];
            
            
                if ([authStatus isEqualToString:NSSENCRYPT("true")] && [uuidRes isEqualToString:uuid] && [reason isEqualToString:NSSENCRYPT("Telegram@Cheatbot_Owner")] && [tokenres isEqualToString:token]) {

                [self sucsses]; //TODO call login
                
                
            }
            else
            {
                timer(0) {
                    [check setObject:reason forKey:NSSENCRYPT("msj")];
                    [check setObject:NSSENCRYPT("cheatbot") forKey:NSSENCRYPT("loggedin")];
                    [check synchronize];
                    
                    [self login];
                    
                    
                });
            }
            }
        }
    });
    
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:NSSENCRYPT("Login") message:NSSENCRYPT("CHEATBOT IOS CHEATS") preferredStyle:UIAlertControllerStyleAlert];
    
    
    
    
    
    
    [alert addTextFieldWithConfigurationHandler:^(UITextField *Text) {
        NSString *xrpbx = [check stringForKey:NSSENCRYPT("msj")];
        Text.placeholder = xrpbx;
        Text.textColor = [UIColor redColor]; Text.clearButtonMode=UITextFieldViewModeWhileEditing;
        
    }];
    
    
    
    
    
    
    UIAlertAction *Login = [UIAlertAction
                            actionWithTitle:NSSENCRYPT("Login") style:UIAlertActionStyleDefault
                            handler:^(UIAlertAction * _Nonnull action) {
                                
                                
                                UITextField *xtext = alert.textFields.firstObject;
        NSString *uuid = [KeychainUtility getPersistentUUID];
            NSString *cheatbotstp = NSSENCRYPT("FREE");
        NSString *token = [check stringForKey:NSSENCRYPT("myenc")];
        
        NSString *urlString = NSSENCRYPT("https://botxd.online/connect");
        NSString *bodyString = [NSString stringWithFormat:@"game=%@&udid=%@&key=%@&myenc=%@",cheatbotstp, uuid, xtext.text, token];
        NSData *bodyData = [bodyString dataUsingEncoding:NSUTF8StringEncoding];

        NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:urlString]];
        [request setHTTPMethod:@"POST"];
        [request setValue:@"application/x-www-form-urlencoded" forHTTPHeaderField:@"Content-Type"];
        [request setHTTPBody:bodyData];

        NSError *error = nil;
        NSData *responseData = [NSURLConnection sendSynchronousRequest:request returningResponse:nil error:&error];

        if (error) {
            showError(NSSENCRYPT("There is an issue\nError Code : -657\nContact Admin"));
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                exit(0);
        });
            }
            
          
         else {
             
             NSString *encrypted = [[NSString alloc] initWithData:responseData encoding:NSUTF8StringEncoding];
             NSData *DCxs = [encrypted dataUsingEncoding:NSUTF8StringEncoding];
             NSDictionary *CHEATBOT = [NSJSONSerialization JSONObjectWithData:DCxs options:kNilOptions error:&error];
             NSString *CheatBotOP = [CHEATBOT objectForKey:@"CheatBot_Owner"];
             NSString *decrypted = [RSA decryptString:CheatBotOP privateKey:privkey];
             NSData *DCs = [decrypted dataUsingEncoding:NSUTF8StringEncoding];
             NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:DCs options:kNilOptions error:&error];
            
            NSString *authStatus = [JSON objectForKey:NSSENCRYPT("status")];
            NSString *uuidRes = [JSON objectForKey:NSSENCRYPT("uuid")];
            NSString *uuidResb = [JSON objectForKey:NSSENCRYPT("endtime")];
            NSString *reason = [JSON objectForKey:NSSENCRYPT("reason")];
            NSString *seller = [JSON objectForKey:NSSENCRYPT("seller")];
             NSString *tokenres = [JSON objectForKey:NSSENCRYPT("token")];
            
            [check setObject:authStatus forKey:NSSENCRYPT("status")];
            [check setObject:uuidRes forKey:NSSENCRYPT("uuid")];
            [check setObject:uuidResb forKey:NSSENCRYPT("endtime")];
            [check setObject:reason forKey:NSSENCRYPT("reason")];
            [check setObject:seller forKey:NSSENCRYPT("seller")];
            [check synchronize];
        
            

            
            
if ([authStatus isEqualToString:NSSENCRYPT("true")] && [uuidRes isEqualToString:uuid] && [reason isEqualToString:NSSENCRYPT("Telegram@Cheatbot_Owner")] && [tokenres isEqualToString:token]) {



[check setObject:xtext.text forKey:NSSENCRYPT("key")];
[check setObject:uuidRes forKey:NSSENCRYPT("uuid")];
[check setObject:uuidResb forKey:NSSENCRYPT("endtime")];
[check setObject:seller forKey:NSSENCRYPT("seller")];
[check setObject:@"1" forKey:NSSENCRYPT("loggedin")];
[check synchronize];
timer(0) {
[self sucsses];

});
}

else{

    [check setObject:reason forKey:@"msj"];
    [check synchronize];
   
    [self wrong];
}

}
    }];
if(![loggedin isEqualToString:@"1"]) {
[alert addAction:Login];
[[UIApplication sharedApplication].keyWindow.rootViewController presentViewController:alert animated:true completion:nil];

}


}


@end



void *botxd(void *)
{

  // wait for the application to finish initializing
  sleep(7);
    
    

        
   

  sleep(WAIT_TIME_SEC);

  NSString *docDir = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];

  NSString *appName = [[[NSBundle mainBundle] infoDictionary] objectForKey:(id)kCFBundleNameKey];
  NSString *appID = [[[NSBundle mainBundle] infoDictionary] objectForKey:(id)kCFBundleIdentifierKey];

  NSString *dumpFolderName = [NSString stringWithFormat:@"%@_%@", [appName stringByReplacingOccurrencesOfString:@" " withString:@""], DUMP_FOLDER];

  NSString *dumpPath = [NSString stringWithFormat:@"%@/%@", docDir, dumpFolderName];
  NSString *headersdumpPath = [NSString stringWithFormat:@"%@/%@/%@", docDir, dumpFolderName, @"headers_dump"];

  NSLog(NSSENCRYPT("UE4DUMP_PATH: %@"), dumpPath);

  NSFileManager *fileManager = [NSFileManager defaultManager];

  [fileManager removeItemAtPath:dumpPath error:nil];
  [fileManager removeItemAtPath:[NSString stringWithFormat:@"%@.zip", dumpPath] error:nil];

  NSError *error = nil;

  if (![fileManager createDirectoryAtPath:headersdumpPath withIntermediateDirectories:YES attributes:nil error:&error])
  {
    NSLog(NSSENCRYPT("Failed to create folders.\nError: %@"), error);
    showError([NSString stringWithFormat:NSSENCRYPT("Failed to create folders.\nError: %@"), error]);
    return nullptr;
  }

  SCLAlertView *waitingAlert = nil;
  showWaiting(NSSENCRYPT("Dumping SDK \nPlease Wait..."), &waitingAlert);
    
    
    
    
    

  Dumper::DumpStatus dumpStatus = Dumper::UE_DS_NONE;

            std::string appIDStr = [appID UTF8String];
            bool foundMatch = false;

            for (auto &it : UE_Games) {
                for (const std::string& validAppID : it.second->GetAppID()) {
                    if (appIDStr == validAppID) {
                        mygame = appIDStr;
                        it.first.dump_dir = dumpPath.UTF8String;
                        it.first.dump_headers_dir = headersdumpPath.UTF8String;
                        dumpStatus = Dumper::Dump(&it.first, it.second);
                        foundMatch = true;
                        break;
                    }
                }
                
                if (foundMatch) {
                    // If a match is found, exit the loop.
                    break;
                }
            }
            
          
  NSString *zipPath = [NSString stringWithFormat:@"%@.zip", dumpPath];
  if ([fileManager fileExistsAtPath:dumpPath])
  {
    [SSZipArchive createZipFileAtPath:zipPath withContentsOfDirectory:dumpPath];
    [fileManager removeItemAtPath:dumpPath error:nil];
  }

  dismisWaiting(waitingAlert);

  if (dumpStatus != Dumper::UE_DS_SUCCESS)
  {
    if (dumpStatus == Dumper::UE_DS_NONE)
    {
      showError(NSSENCRYPT("This Game Not Supported \nPlease Try With Mentioned Games only \nUse Oringnal appId/BundleId\n Contact Telegram @CheatBot_Owner."));
    }
    else
    {
        
        NSUserDefaults *check;
        check = [NSUserDefaults standardUserDefaults];
        NSString *tip1 = [check stringForKey:(NSSENCRYPT("myenc"))];
        NSString *tip2 = [check stringForKey:(NSSENCRYPT("phplogo"))];
        NSString *endtime = [check stringForKey:(NSSENCRYPT("endtime"))];
        if (endtime == NULL || endtime == NSSENCRYPT("null")) {
            exit(0);
        }
        if (![tip1 isEqualToString:tip2]) {
            exit(0);
        }
        
      std::string dumpStatusStr = Dumper::DumpStatusToStr(dumpStatus);
      showError([NSString stringWithFormat:NSSENCRYPT("Dump Failed: Err: {%s}.\nLogs at: \n%@"), dumpStatusStr.c_str(), dumpPath]);
    }
    return nullptr;
  }

  NSLog(NSSENCRYPT("Dump finished."));

  dispatch_async(dispatch_get_main_queue(), ^{
    UIViewController *vc = [[[[UIApplication sharedApplication] delegate] window] rootViewController];

    SCLAlertView *okAlert = [[SCLAlertView alloc] init];
    okAlert.shouldDismissOnTapOutside = YES;
    okAlert.showAnimationType = SCLAlertViewShowAnimationSlideInFromTop;
    okAlert.hideAnimationType = SCLAlertViewHideAnimationSlideOutToBottom;

    [okAlert alertIsDismissed:^{
      SCLAlertView *transferAlert = [[SCLAlertView alloc] init];
      transferAlert.shouldDismissOnTapOutside = YES;
      transferAlert.showAnimationType = SCLAlertViewShowAnimationSlideInFromTop;
      transferAlert.hideAnimationType = SCLAlertViewHideAnimationSlideOutToBottom;

      [transferAlert addButton:NSSENCRYPT("Send Dump OTA")
                   actionBlock:^(void) {
                     dumpTransferUI = [[DumpTransferUI alloc] initWithFileAtPath:zipPath];
                     [dumpTransferUI show];
                   }];
        
        [transferAlert addButton:NSSENCRYPT("Save Dump Manually")
                     actionBlock:^(void) {
            
            
  
            
            
            
            NSString *pathxd = [NSString stringWithFormat:@"%@_%@.zip", [appName stringByReplacingOccurrencesOfString:@" " withString:@""], DUMP_FOLDER];
            
            
            UIViewController *topViewController = [UIApplication sharedApplication].keyWindow.rootViewController;
            while (topViewController.presentedViewController) {
                topViewController = topViewController.presentedViewController;
            }
            
                NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
                NSString *documentsDirectory = [paths objectAtIndex:0];
                NSString *filePath = [documentsDirectory stringByAppendingPathComponent:pathxd];

                NSURL *fileURL = [NSURL fileURLWithPath:filePath];
                NSArray *activityItems = @[fileURL];

                UIActivityViewController *activityViewController = [[UIActivityViewController alloc] initWithActivityItems:activityItems applicationActivities:nil];

                [topViewController presentViewController:activityViewController animated:YES completion:nil];
            
      
         
            
            
            
    }];
        
      [transferAlert showEdit:vc title:@___ALERT_TITLE subTitle:NSSENCRYPT("How you want to copy Dump?") closeButtonTitle:NSSENCRYPT("Don't Copy") duration:0.0f];
    }];

    [okAlert showSuccess:vc title:@___ALERT_TITLE subTitle:[NSString stringWithFormat:NSSENCRYPT("Dump Path: \n%@"), zipPath] closeButtonTitle:NSSENCRYPT("OK") duration:0.0f];
  });
            
            
            
       
   

  return nullptr;
            
            
            
            
            
}
