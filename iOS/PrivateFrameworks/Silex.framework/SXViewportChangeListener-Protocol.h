//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SXViewport;

@protocol SXViewportChangeListener <NSObject>

@optional
- (void)viewport:(SXViewport *)arg1 interfaceOrientationChangedFromOrientation:(long long)arg2;
- (void)viewport:(SXViewport *)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(SXViewport *)arg1 contentFrameDidChangeFromFrame:(struct CGRect)arg2;
- (void)viewport:(SXViewport *)arg1 documentSizeDidChangeFromSize:(struct CGSize)arg2;
- (void)viewport:(SXViewport *)arg1 boundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(SXViewport *)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
@end
