//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIImage;

@interface CLKTreatedImageKey : NSObject <NSCopying>
{
    UIImage *_rawImage;
    int _scaleMode;
    float _scale;
    int _maskMode;
    float _cornerRadius;
    struct CGSize _maxSize;
}

+ (id)keyWithRawImage:(id)arg1 maxSize:(struct CGSize)arg2 cornerRadius:(float)arg3;
+ (id)keyWithRawImage:(id)arg1 maxSize:(struct CGSize)arg2 maskMode:(int)arg3;
+ (id)keyWithRawImage:(id)arg1 scale:(float)arg2 cornerRadius:(float)arg3;
+ (id)keyWithRawImage:(id)arg1 scale:(float)arg2 maskMode:(int)arg3;
@property(readonly, nonatomic) float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) int maskMode; // @synthesize maskMode=_maskMode;
@property(readonly, nonatomic) float scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(readonly, nonatomic) int scaleMode; // @synthesize scaleMode=_scaleMode;
@property(readonly, nonatomic) UIImage *rawImage; // @synthesize rawImage=_rawImage;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;

@end

