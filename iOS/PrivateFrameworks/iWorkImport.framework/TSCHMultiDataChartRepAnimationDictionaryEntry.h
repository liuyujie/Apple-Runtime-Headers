//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, TSCHMultiDataLayerAnimationInfo;

__attribute__((visibility("hidden")))
@interface TSCHMultiDataChartRepAnimationDictionaryEntry : NSObject
{
    TSCHMultiDataLayerAnimationInfo *mAnimationInfo;
    NSMutableArray *mAnimations;
}

+ (id)entry;
- (void).cxx_destruct;
- (id)animation;
- (void)addAnimation:(id)arg1 animationInfo:(id)arg2;
- (id)init;

@end

