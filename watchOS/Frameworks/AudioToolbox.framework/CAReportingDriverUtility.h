//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CAReportingDriverUtility : NSObject
{
    NSMutableArray *_ioChannelSubscriptions;
}

@property(retain) NSMutableArray *ioChannelSubscriptions; // @synthesize ioChannelSubscriptions=_ioChannelSubscriptions;
- (void).cxx_destruct;
- (id)getDriverStatisticsRelativeToSnapShot:(struct NSMutableDictionary *)arg1;
- (struct NSMutableDictionary *)getSnapShot;
- (id)init;

@end

