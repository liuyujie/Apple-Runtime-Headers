//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSSecureCoding.h"

@class NSData, NSString;

@interface HMDApplicationVendorIDStoreValue : HMFObject <NSSecureCoding>
{
    _Bool _spiClient;
    NSData *_vendorIdSha1;
    NSString *_applicationBundleId;
    NSString *_companionAppBundleId;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool spiClient; // @synthesize spiClient=_spiClient;
@property(readonly, nonatomic) NSString *companionAppBundleId; // @synthesize companionAppBundleId=_companionAppBundleId;
@property(readonly, nonatomic) NSString *applicationBundleId; // @synthesize applicationBundleId=_applicationBundleId;
@property(readonly, nonatomic) NSData *vendorIdSha1; // @synthesize vendorIdSha1=_vendorIdSha1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithVendorIDSha1:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(_Bool)arg4;

@end

