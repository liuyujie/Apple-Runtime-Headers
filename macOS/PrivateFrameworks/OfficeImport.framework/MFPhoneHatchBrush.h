//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/MFPhoneBrush.h>

@class OITSUColor;

@interface MFPhoneHatchBrush : MFPhoneBrush
{
    OITSUColor *m_colour;
    int m_style;
}

+ (id)patternNameForHatchStyle:(int)arg1;
+ (id)hatchBrushWithColour:(id)arg1 in_style:(int)arg2;
- (void).cxx_destruct;
- (void)fillPath:(id)arg1 in_path:(id)arg2;
- (id)initWithColour:(id)arg1 in_style:(int)arg2;

@end

