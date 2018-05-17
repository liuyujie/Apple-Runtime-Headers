//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface CHDrawing : NSObject <NSCopying>
{
    struct CJKChar _drawing;
}

+ (float)_computeXProjectionBoundsOverlapFromReferenceBounds:(struct CGRect)arg1 toSubjectBounds:(struct CGRect)arg2;
+ (id)sortedArrayForPointIndices:(id)arg1;
@property(nonatomic) struct CJKChar drawing; // @synthesize drawing=_drawing;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (set_3721c3e1)computeDelayedStrokesUsingMinimumDrawingSize:(struct CGSize)arg1;
- (struct CGRect)boundingBoxForDrawingSegmentFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)appendSegment:(id)arg1 fromDrawing:(id)arg2;
- (id)findSubStrokeSegmentationPointsExcludingStrokes:(set_3721c3e1)arg1;
- (id)filterPointsWithProximity:(double)arg1 fixedPoints:(id)arg2 points:(id)arg3;
- (id)findLocalYMaximaWithWindowSize:(unsigned int)arg1 excludingStrokes:(set_3721c3e1)arg2;
- (id)initialSegmentationPointIndicesForDrawing;
- (void)setLineHeight:(double)arg1;
- (vector_55d7bafa)strokeIndicesSortedByMinXCoordinate;
- (id)spatiallyResampledWithDistance:(float)arg1;
- (id)sortedDrawingUsingMinXCoordinate;
- (Matrix_273a43f8)orientationRepresentationForSampling:(unsigned int)arg1 convolutionWidth:(unsigned int)arg2;
- (Matrix_273a43f8)bitmapRepresentationForSize:(struct CGSize)arg1 drawingAlgorithm:(int)arg2;
- (Matrix_273a43f8)bitmapRepresentationForSize:(struct CGSize)arg1;
- (id)xyRepresentation;
- (struct _NSRange)matchingStrokePrefixRangeForDrawing:(id)arg1;
- (_Bool)isPrefixForDrawing:(id)arg1;
- (void)clear;
- (void)endStroke;
- (void)addPoint:(struct CGPoint)arg1;
- (struct CGRect)bounds;
- (struct CGRect)strokeBoundsAtIndex:(unsigned int)arg1;
- (_Bool)containsStrokeLessThanSize:(struct CGSize)arg1;
- (unsigned int)strokeCount;
- (struct CGPoint)pointForStrokeIndex:(unsigned int)arg1 pointIndex:(unsigned int)arg2;
- (unsigned int)pointCountForStrokeIndex:(unsigned int)arg1;
- (unsigned int)pointCount;
- (id)initWithContentsOfFile:(id)arg1;

@end
