//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIImage;

@interface HKFillStyle : NSObject <NSCopying>
{
    UIImage *_cachedImage;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_renderInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;
- (_Bool)_needsRenderForSize:(struct CGSize)arg1;
- (void)_renderCacheIfNecessaryForSize:(struct CGSize)arg1;
- (void)_renderCacheIfNecessaryForWidth:(float)arg1;
- (void)_renderCacheIfNecessaryForHeight:(float)arg1;
- (id)fillImageWithWidth:(float)arg1;
- (id)fillImageWithHeight:(float)arg1;

@end

