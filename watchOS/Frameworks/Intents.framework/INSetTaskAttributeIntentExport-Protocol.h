//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INSpatialEventTrigger, INTask, INTemporalEventTrigger;

@protocol INSetTaskAttributeIntentExport <NSObject, JSExport>
@property(copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
@property(copy, nonatomic) INSpatialEventTrigger *spatialEventTrigger;
@property(nonatomic) int status;
@property(copy, nonatomic) INTask *targetTask;
- (id)init;
@end

