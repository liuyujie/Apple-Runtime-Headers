//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import "CLSRelationable.h"

@class CLSActivityItem, NSArray, NSDate, NSString;

@interface CLSActivity : CLSObject <CLSRelationable>
{
    double _duration;
    _Bool _paused;
    NSDate *_activityStartDate;
    NSString *__primaryActivityItemIdentifier;
    NSArray *__activityItems;
}

+ (_Bool)supportsSecureCoding;
+ (id)relations;
@property(readonly, nonatomic) NSArray *_activityItems; // @synthesize _activityItems=__activityItems;
@property(copy, nonatomic) NSString *_primaryActivityItemIdentifier; // @synthesize _primaryActivityItemIdentifier=__primaryActivityItemIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSArray *additionalActivityItems;
- (id)activityItemWithIdentifier:(id)arg1;
- (_Bool)_isObjectActivityItem:(id)arg1 withIdentifier:(id)arg2;
- (_Bool)_isObjectPrimaryItem:(id)arg1;
- (void)addAdditionalActivityItem:(id)arg1;
- (_Bool)validatePrimaryActivityItemType:(id)arg1;
@property(retain, nonatomic) CLSActivityItem *primaryActivityItem;
@property(copy, nonatomic) NSString *primaryActivityItemIdentifier;
- (void)_generateTimeInterval;
- (long long)effectiveAuthorizationStatus;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)start;
- (_Bool)isStarted;
- (double)runningDelta;
@property(readonly, nonatomic) double duration;
@property(nonatomic) double progress;
- (void)addProgressRangeFromStart:(double)arg1 toEnd:(double)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
