//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VisualTabPickerLayoutEngine;

@protocol VisualTabPickerLayoutEngineInputProvider <NSObject>
- (BOOL)layoutEngineShouldLayOutRightToLeft:(VisualTabPickerLayoutEngine *)arg1;
- (double)tileHeightToWidthRatioForLayoutEngine:(VisualTabPickerLayoutEngine *)arg1;
- (struct CGRect)boundsForLayoutEngine:(VisualTabPickerLayoutEngine *)arg1;
- (unsigned long long)numberOfTilesForLayoutEngine:(VisualTabPickerLayoutEngine *)arg1;
@end
