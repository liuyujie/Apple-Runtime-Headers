//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Preferences/PSSpecifier.h>

@class NSString, PSCellularUsage;

@interface PSAppCellularUsageSpecifier : PSSpecifier
{
    _Bool _shouldUseBillingCycleData;
    _Bool _shouldShowUsage;
    _Bool _canEnable;
    int _selectedBillingCycle;
    NSString *_appName;
    NSString *_bundleID;
    PSCellularUsage *_usage;
}

+ (id)systemPolicySpecifierForAppName:(id)arg1 bundleID:(id)arg2 icon:(id)arg3 enabled:(_Bool)arg4;
+ (id)appSpecifierWithUsage:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4;
+ (id)_specifierWithCellTitle:(id)arg1 appName:(id)arg2 bundleID:(id)arg3 canBeEnabled:(_Bool)arg4 shouldShowUsage:(_Bool)arg5 target:(id)arg6 set:(SEL)arg7 get:(SEL)arg8 icon:(id)arg9;
@property(nonatomic) _Bool canEnable; // @synthesize canEnable=_canEnable;
@property(nonatomic) _Bool shouldShowUsage; // @synthesize shouldShowUsage=_shouldShowUsage;
@property(nonatomic) int selectedBillingCycle; // @synthesize selectedBillingCycle=_selectedBillingCycle;
@property(nonatomic) _Bool shouldUseBillingCycleData; // @synthesize shouldUseBillingCycleData=_shouldUseBillingCycleData;
@property(copy, nonatomic) PSCellularUsage *usage; // @synthesize usage=_usage;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (_Bool)setCellularUsagePolicy:(id)arg1;
- (id)cellularUsagePolicy;
- (void)prefetchCellularUsagePolicy;
- (id)dataUsageString;
- (double)dataUsage;
- (id)initWithName:(id)arg1 usage:(id)arg2;

@end

