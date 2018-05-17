//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISAnimatedImage;

@interface PHAnimatedImage : NSObject
{
    unsigned int _frameCount;
    unsigned int _loopCount;
    unsigned int _pixelWidth;
    unsigned int _pixelHeight;
    ISAnimatedImage *_is_animatedImage;
    double _duration;
}

+ (void)cancelAnimatedImageRequest:(long long)arg1;
+ (long long)requestAnimatedImageWithURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (long long)requestAnimatedImageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) ISAnimatedImage *is_animatedImage; // @synthesize is_animatedImage=_is_animatedImage;
@property(readonly, nonatomic) unsigned int pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property(readonly, nonatomic) unsigned int pixelWidth; // @synthesize pixelWidth=_pixelWidth;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) unsigned int loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, nonatomic) unsigned int frameCount; // @synthesize frameCount=_frameCount;
- (void).cxx_destruct;
- (void)_initializePropertiesWithAnimatedImage:(id)arg1;
- (id)initWithURL:(id)arg1 cachingStrategy:(int)arg2 useSharedDecoding:(_Bool)arg3;
- (id)initWithURL:(id)arg1;

@end
