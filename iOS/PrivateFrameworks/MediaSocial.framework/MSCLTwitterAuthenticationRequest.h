//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MSCLTwitterAuthenticationRequest : NSObject
{
    NSString *_password;
    CDUnknownBlockType _responseBlock;
    NSString *_username;
}

- (void).cxx_destruct;
- (void)_finishWithAuthenticatedAccount:(id)arg1 error:(id)arg2;
- (id)_consumerSecret;
- (id)_consumerKey;
- (void)_authenticateUsername:(id)arg1 password:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;
- (id)initWithUsername:(id)arg1 password:(id)arg2;

@end
