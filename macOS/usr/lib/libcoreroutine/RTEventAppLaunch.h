//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RTEvent.h"

#import "NSSecureCoding.h"

@class NSString;

@interface RTEventAppLaunch : RTEvent <NSSecureCoding>
{
    NSString *_bundleId;
    long long _appLaunchState;
}

+ (id)stringFromAppLaunchState:(long long)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long appLaunchState; // @synthesize appLaunchState=_appLaunchState;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleId:(id)arg1 appLaunchState:(long long)arg2 source:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5;

@end
