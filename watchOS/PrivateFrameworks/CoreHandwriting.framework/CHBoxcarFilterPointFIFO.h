//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreHandwriting/CHPointFIFO.h>

@interface CHBoxcarFilterPointFIFO : CHPointFIFO
{
    unsigned int _width;
    float _spacing;
    vector_74a7c1d0 _prevPoints;
}

@property(nonatomic) vector_027a6188 prevPoints; // @synthesize prevPoints=_prevPoints;
@property(nonatomic) float spacing; // @synthesize spacing=_spacing;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (void)flush;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (void)emitAveragedPoint;
- (id)initWithFIFO:(id)arg1 width:(unsigned int)arg2;
- (id)initWithFIFO:(id)arg1 width:(unsigned int)arg2 spacing:(float)arg3;

@end
