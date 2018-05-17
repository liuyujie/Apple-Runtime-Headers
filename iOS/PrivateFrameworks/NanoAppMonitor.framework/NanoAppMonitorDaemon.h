//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NanoAppDataProvider, NanoAppUsageMonitor, NanoAppUsageSync;

@interface NanoAppMonitorDaemon : NSObject
{
    NanoAppDataProvider *_appDataProvider;
    NanoAppUsageSync *_appUsageSync;
    NanoAppUsageMonitor *_appUsageMonitor;
}

+ (id)sharedDaemon;
@property(retain) NanoAppUsageMonitor *appUsageMonitor; // @synthesize appUsageMonitor=_appUsageMonitor;
@property(retain) NanoAppUsageSync *appUsageSync; // @synthesize appUsageSync=_appUsageSync;
@property(retain) NanoAppDataProvider *appDataProvider; // @synthesize appDataProvider=_appDataProvider;
- (void).cxx_destruct;
- (void)start;
- (id)init;

@end
