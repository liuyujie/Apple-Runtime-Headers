//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString, VSAccountMetadataRequest, VSOptional;

__attribute__((visibility("hidden")))
@interface VSViewServiceRequest : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _allowsPrivacyUI;
    BOOL _requiresPrivacyUI;
    BOOL _canVetoAuthentication;
    BOOL _shouldInferFeaturedProviders;
    VSAccountMetadataRequest *_accountMetadataRequest;
    VSOptional *_requestingAppDisplayName;
    NSString *_requestingAppAdamID;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *requestingAppAdamID; // @synthesize requestingAppAdamID=_requestingAppAdamID;
@property(retain, nonatomic) VSOptional *requestingAppDisplayName; // @synthesize requestingAppDisplayName=_requestingAppDisplayName;
@property(nonatomic) BOOL shouldInferFeaturedProviders; // @synthesize shouldInferFeaturedProviders=_shouldInferFeaturedProviders;
@property(copy, nonatomic) VSAccountMetadataRequest *accountMetadataRequest; // @synthesize accountMetadataRequest=_accountMetadataRequest;
@property(nonatomic) BOOL canVetoAuthentication; // @synthesize canVetoAuthentication=_canVetoAuthentication;
@property(nonatomic) BOOL requiresPrivacyUI; // @synthesize requiresPrivacyUI=_requiresPrivacyUI;
@property(nonatomic) BOOL allowsPrivacyUI; // @synthesize allowsPrivacyUI=_allowsPrivacyUI;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *localizedVideoTitle;
@property(readonly, copy, nonatomic) NSArray *supportedAccountProviderAuthenticationSchemes;
@property(readonly, copy, nonatomic) NSArray *featuredIdentityProviderIdentifiers;
@property(readonly, copy, nonatomic) NSArray *supportedIdentityProviderIdentifiers;
@property(readonly, nonatomic) BOOL allowsAuthenticationUI;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

