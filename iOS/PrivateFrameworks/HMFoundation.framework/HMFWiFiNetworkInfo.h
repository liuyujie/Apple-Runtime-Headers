//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import "HMFObject.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HMFMACAddress, NSArray, NSString;

@interface HMFWiFiNetworkInfo : HMFObject <HMFObject, NSCopying, NSSecureCoding>
{
    HMFMACAddress *_MACAddress;
    NSString *_SSID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSString *SSID; // @synthesize SSID=_SSID;
@property(readonly, copy) HMFMACAddress *MACAddress; // @synthesize MACAddress=_MACAddress;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToNetworkInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *propertyDescription;
- (id)initWithMACAddress:(id)arg1 SSID:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

