//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIStatusBarPrioritized.h"

@class NSMutableArray, _UIStatusBarDisplayItemPlacement, _UIStatusBarRegion;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementState : NSObject <_UIStatusBarPrioritized>
{
    _UIStatusBarDisplayItemPlacement *_placement;
    _UIStatusBarRegion *_region;
    NSMutableArray *_relations;
}

+ (id)stateForDisplayItemPlacement:(id)arg1 region:(id)arg2;
@property(retain, nonatomic) NSMutableArray *relations; // @synthesize relations=_relations;
@property(readonly, nonatomic) __weak _UIStatusBarRegion *region; // @synthesize region=_region;
@property(readonly, nonatomic) _UIStatusBarDisplayItemPlacement *placement; // @synthesize placement=_placement;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic, getter=areRelationsFulfilled) _Bool relationsFulfilled;
@property(readonly, nonatomic) long long priority;

@end

