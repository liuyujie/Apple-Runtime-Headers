//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TVMLKit/_TVImageRepresentation.h>

@class TVImageProxy;

@interface __TVImageProxyRepresentation : _TVImageRepresentation
{
    TVImageProxy *_imageProxy;
    struct CGImage *_originalImage;
}

- (void).cxx_destruct;
- (id)_originalImageCacheKey;
- (struct CGImage *)_originalImage;
- (void)loadImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithImageProxy:(id)arg1;

@end

