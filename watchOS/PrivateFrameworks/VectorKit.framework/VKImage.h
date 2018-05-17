//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, VKResourceManager;

@interface VKImage : NSObject
{
    struct CGImage *_imageRef;
    NSData *_data;
    NSString *_name;
    struct Texture2D *_gglTexture;
    struct CGRect _collisionRect;
    struct CGPoint _anchorPoint;
    struct CGSize _size;
    float _scale;
    _Bool _hasCollisionRect;
    _Bool _hasAnchorPoint;
    _Bool _usedAsTextureAndImage;
    _Bool _isTextureReady;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _isImageReady
    VKResourceManager *_resourceManager;
    unsigned char _imageHash[16];
}

- (int)compareTo:(id)arg1;
- (void)setCollisionRect:(struct CGRect)arg1;
- (void)setAnchorPoint:(struct CGPoint)arg1;
- (struct CGRect)collisionRect;
- (struct CGPoint)anchorPoint;
- (float)scale;
- (struct CGSize)size;
- (void)_prepareImage;
- (struct CGImage *)image;
- (void)prepareTexture;
- (struct Texture2D *)gglTexture;
- (void)dealloc;
- (id)initWithName:(id)arg1 scale:(float)arg2 resourceManager:(id)arg3;
- (id)initWithData:(id)arg1 scale:(float)arg2;
- (id)initWithData:(id)arg1 scale:(float)arg2 usedAsTextureAndImage:(_Bool)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(float)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(float)arg2 usedAsTextureAndImage:(_Bool)arg3;

@end
