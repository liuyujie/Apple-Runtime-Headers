//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PKTextureHandler : NSObject
{
    int _paperTexture;
    int _eraserTexture;
    struct CGSize _paperTextureSize;
    NSMutableDictionary *_textureDictionary;
}

+ (id)sharedTextureHandler;
- (void).cxx_destruct;
- (unsigned int)textureWithImage:(struct CGImage *)arg1 textureName:(id)arg2 wrap:(_Bool)arg3;
- (unsigned int)loadTexture:(int *)arg1 image:(struct CGImage *)arg2 wrap:(_Bool)arg3;
- (unsigned int)textureWithName:(id)arg1 wrap:(_Bool)arg2 forInk:(_Bool)arg3;
- (unsigned int)textureWithName:(id)arg1 forInk:(_Bool)arg2;
- (unsigned int)textureWithName:(id)arg1 wrap:(_Bool)arg2;
- (unsigned int)textureWithName:(id)arg1;
- (unsigned int)loadTexture:(int *)arg1 name:(id)arg2 wrap:(_Bool)arg3 forInk:(_Bool)arg4;
- (unsigned int)loadTexture:(int *)arg1 name:(id)arg2 forInk:(_Bool)arg3;
@property(readonly, nonatomic) unsigned int eraserTexture;
- (unsigned int)gradientTextureFrom:(double)arg1;
@property(readonly, nonatomic) struct CGSize paperTextureSize;
@property(readonly, nonatomic) unsigned int paperTexture;
- (id)init;

@end

