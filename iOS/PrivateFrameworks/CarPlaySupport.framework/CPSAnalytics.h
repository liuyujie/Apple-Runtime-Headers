//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CPSAnalytics : NSObject
{
}

+ (id)sharedInstance;
- (void)navigationStartedWithBundleIdentifier:(id)arg1;
- (void)_sendCoreAnalyticsEvent:(id)arg1 withDictionary:(id)arg2;
@property(readonly, nonatomic) _Bool shouldRecordAnalyticsEvents;

@end
