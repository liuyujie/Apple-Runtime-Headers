//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AXElementGrouper : NSObject
{
    float _thresholdForDeterminingEqualSize;
    int _heuristics;
}

@property(nonatomic) int heuristics; // @synthesize heuristics=_heuristics;
- (id)_groupablesForItems:(id)arg1;
- (id)_buildHierarchyForGroup:(id)arg1 indexOfKeyboard:(unsigned int *)arg2;
- (id)_flattenHierarchyForGroup:(id)arg1 rootLevel:(_Bool)arg2;
- (_Bool)_frame:(struct CGRect)arg1 isApproximatelySameSizeAsFrame:(struct CGRect)arg2;
- (id)_groupRemovingImpossibleGroups:(id)arg1 isRootLevel:(_Bool)arg2;
- (id)groupElementsInRootGroup:(id)arg1;
@property(readonly, nonatomic) float thresholdForDeterminingEqualSize; // @synthesize thresholdForDeterminingEqualSize=_thresholdForDeterminingEqualSize;
@property(readonly, nonatomic) unsigned int preferredGroupSize;
@property(readonly, nonatomic) unsigned int maximumGroupSize;
@property(readonly, nonatomic) unsigned int minimumGroupSize;
- (id)initWithHeuristics:(int)arg1;
- (id)init;

@end

