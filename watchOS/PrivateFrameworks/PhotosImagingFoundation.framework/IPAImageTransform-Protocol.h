//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol IPAImageTransform
- (id <IPAImageTransform>)inverseTransform;
- (_Bool)canAlignToPixelsExactly;
- (struct CGPoint)mapPoint:(struct CGPoint)arg1;
- (id <IPAImageGeometry>)intrinsicGeometry;
- (id <IPAImageGeometry>)inputGeometry;
@end
