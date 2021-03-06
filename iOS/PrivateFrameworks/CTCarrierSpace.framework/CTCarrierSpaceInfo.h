//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CTCarrierSpaceAppsInfo, CTCarrierSpacePlansInfo, CTCarrierSpaceUsageInfo;

@interface CTCarrierSpaceInfo : NSObject <NSSecureCoding>
{
    CTCarrierSpaceUsageInfo *_usageInfo;
    CTCarrierSpacePlansInfo *_plansInfo;
    CTCarrierSpaceAppsInfo *_appsInfo;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) CTCarrierSpaceAppsInfo *appsInfo; // @synthesize appsInfo=_appsInfo;
@property(retain, nonatomic) CTCarrierSpacePlansInfo *plansInfo; // @synthesize plansInfo=_plansInfo;
@property(retain, nonatomic) CTCarrierSpaceUsageInfo *usageInfo; // @synthesize usageInfo=_usageInfo;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

