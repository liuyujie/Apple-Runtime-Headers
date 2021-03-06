//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UILabelScaledMetrics : NSObject
{
    float _actualScaleFactor;
    float _baselineOffset;
    float _scaledBaselineOffset;
    float _scaledLineHeight;
    int _measuredNumberOfLines;
    NSAttributedString *_scaledAttributedText;
    struct CGSize _targetSize;
    struct CGSize _scaledSize;
}

@property(retain, nonatomic) NSAttributedString *scaledAttributedText; // @synthesize scaledAttributedText=_scaledAttributedText;
@property(nonatomic) int measuredNumberOfLines; // @synthesize measuredNumberOfLines=_measuredNumberOfLines;
@property(nonatomic) float scaledLineHeight; // @synthesize scaledLineHeight=_scaledLineHeight;
@property(nonatomic) float scaledBaselineOffset; // @synthesize scaledBaselineOffset=_scaledBaselineOffset;
@property(nonatomic) float baselineOffset; // @synthesize baselineOffset=_baselineOffset;
@property(nonatomic) float actualScaleFactor; // @synthesize actualScaleFactor=_actualScaleFactor;
@property(nonatomic) struct CGSize scaledSize; // @synthesize scaledSize=_scaledSize;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
- (void).cxx_destruct;

@end

