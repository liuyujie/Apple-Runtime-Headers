//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, VSAccountStore, VSOptional;

@interface VSAccount : NSObject <NSSecureCoding>
{
    VSAccountStore *_accountStore;
    NSString *_accountTypeDescription;
    NSString *_accountDescription;
    VSOptional *_optionalIdentityProviderDisplayName;
    VSOptional *_identityProviderID;
    NSString *_username;
    VSOptional *_authenticationToken;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) VSOptional *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) VSOptional *identityProviderID; // @synthesize identityProviderID=_identityProviderID;
@property(retain, nonatomic) VSOptional *optionalIdentityProviderDisplayName; // @synthesize optionalIdentityProviderDisplayName=_optionalIdentityProviderDisplayName;
@property(copy, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property(copy, nonatomic) NSString *accountTypeDescription; // @synthesize accountTypeDescription=_accountTypeDescription;
@property(nonatomic) __weak VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *identityProviderDisplayName;
- (id)init;
@property(retain, nonatomic) VSOptional *keychainItem;

@end

