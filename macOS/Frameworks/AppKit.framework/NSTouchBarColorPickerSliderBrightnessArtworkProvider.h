//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTouchBarColorPickerSliderHSBArtworkProvider.h>

__attribute__((visibility("hidden")))
@interface NSTouchBarColorPickerSliderBrightnessArtworkProvider : NSTouchBarColorPickerSliderHSBArtworkProvider
{
    double _displayHue;
    double _displaySaturation;
}

- (double)lightnessForValue:(double)arg1 baseColor:(id)arg2 horizontallyFlipped:(BOOL)arg3 allowedColorSpaces:(id)arg4;
- (id)sliderLabel;
- (id)formattedValue:(double)arg1;
- (id)accessibilityValueStringForValue:(double)arg1;
- (double)valueFromAccessibilityValueString:(id)arg1;
- (long long)representedHSBComponent;
- (void)updateRootTrackLayer:(id)arg1 color:(id)arg2 horizontallyFlipped:(BOOL)arg3 allowedColorSpaces:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDisplayHue:(double)arg1 displaySaturation:(double)arg2;

@end
