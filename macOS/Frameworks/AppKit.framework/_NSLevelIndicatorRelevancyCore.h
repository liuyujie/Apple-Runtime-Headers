//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_NSLevelIndicatorCore.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSLevelIndicatorRelevancyCore : NSObject <_NSLevelIndicatorCore>
{
}

- (id)_coreUIDrawOptionsForState:(CDStruct_40e84b6d)arg1;
- (struct NSEdgeInsets)alignmentRectInsetsForState:(CDStruct_40e84b6d)arg1;
- (struct CGSize)indicatorSizeForState:(CDStruct_40e84b6d)arg1;
- (BOOL)allowsVibrancyForState:(CDStruct_40e84b6d)arg1;
- (void)layoutSublayersOfLayer:(id)arg1 forState:(CDStruct_40e84b6d)arg2;
- (void)updateLayer:(id)arg1 forState:(CDStruct_40e84b6d)arg2;
- (void)drawInRect:(struct CGRect)arg1 inContext:(id)arg2 forState:(CDStruct_40e84b6d)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
