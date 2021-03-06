//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSMutableDictionary, NSSliderAccessory, NSTimer;

__attribute__((visibility("hidden")))
@interface _NSSliderCellPrivateData : NSObject
{
    NSMutableDictionary *_tickMarkProminence;
    double originalValue;
    double defaultValue;
    NSSliderAccessory *minimumValueAccessory;
    NSSliderAccessory *maximumValueAccessory;
    id <NSSliderCellMetricsStrategy> metricsStrategy;
    NSTimer *repeatTimer;
    NSColor *_trackFillColor;
}

@property(copy) NSColor *trackFillColor; // @synthesize trackFillColor=_trackFillColor;
- (void)dealloc;
@property(copy) NSMutableDictionary *tickMarkProminence;

@end

