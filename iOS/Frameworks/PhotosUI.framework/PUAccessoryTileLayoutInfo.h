//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUTileLayoutInfo.h>

__attribute__((visibility("hidden")))
@interface PUAccessoryTileLayoutInfo : PUTileLayoutInfo
{
    double _minimumVisibleHeight;
    struct CGRect _untransformedContentFrame;
    struct UIEdgeInsets _contentInsets;
}

@property(readonly, nonatomic) double minimumVisibleHeight; // @synthesize minimumVisibleHeight=_minimumVisibleHeight;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) struct CGRect untransformedContentFrame; // @synthesize untransformedContentFrame=_untransformedContentFrame;
- (id)clone;
- (_Bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 untransformedContentFrame:(struct CGRect)arg8 contentInsets:(struct UIEdgeInsets)arg9 minimumVisibleHeight:(double)arg10;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;

@end
