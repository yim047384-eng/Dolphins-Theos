//
//  AES2.h
//  iOSAESObjc
//
//  Created by Professor on 17/10/2016.
//  Copyright (c) 20226 Professor. All rights reserved.
//

//
// The Base64 class is used from a snippet on Internet instead of adding it as a dependency.
// So this project can be built easily without dependency management or framework integration.
//

// TOOLS: XCode 6.3
// Exception handling is not done, you can deal with it yourself if you face any.

// Use this header to use all methods, the usage can be seen in ViewController.m

#import <Foundation/Foundation.h>

@interface NSData (AES2)

- (NSData *) enHinaabil:(NSString *)one;


- (NSData *) deHinaabil:(NSString *)one;


- (NSData *) enHinaabilc:(NSString *)one tow:(NSString *)tow;


- (NSData *) deHinaabilc:(NSString *)one tow:(NSString *)tow
;

@end
