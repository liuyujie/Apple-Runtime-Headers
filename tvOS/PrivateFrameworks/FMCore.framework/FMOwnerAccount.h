//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMOwnerAccountIdentity.h"

@class ACAccount, NSString;

@interface FMOwnerAccount : NSObject <FMOwnerAccountIdentity>
{
    _Bool _legacyBehavior;
    NSString *_authToken;
    NSString *_hostName;
    ACAccount *_account;
    NSString *_username;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_personId;
}

+ (void)renewCredentialsWithBundleId:(id)arg1 force:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)ownerAccountWithType:(long long)arg1;
+ (id)ownerAccount;
+ (id)personIdForAccount:(id)arg1 error:(id *)arg2;
+ (id)primaryAccountWithStore:(id)arg1 error:(id *)arg2;
+ (id)subAccountForAccount:(id)arg1 type:(long long)arg2;
+ (id)hostNameForAccount:(id)arg1 type:(long long)arg2;
+ (id)authTokenForSubAccount:(id)arg1 type:(long long)arg2 error:(id *)arg3;
+ (id)sharedInstance;
@property(nonatomic) _Bool legacyBehavior; // @synthesize legacyBehavior=_legacyBehavior;
@property(copy, nonatomic) NSString *personId; // @synthesize personId=_personId;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(readonly, copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
- (void).cxx_destruct;
- (id)hostNameOfType:(long long)arg1;
- (id)tokenOfType:(long long)arg1;
- (id)description;
- (void)initializeAccount;
- (void)accountChanged;
- (void)dealloc;
- (id)initWithAuthToken:(id)arg1 personId:(id)arg2;
- (id)init;

@end

