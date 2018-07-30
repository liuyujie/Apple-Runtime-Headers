//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface _UILegibilityImageSet : NSObject
{
    UIImage *_image;
    UIImage *_shadowImage;
}

+ (id)imageFromImage:(id)arg1 withShadowImage:(id)arg2;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)dealloc;
- (id)imageSetWithOrientation:(long long)arg1;
- (id)imageSetFlippedForRightToLeft;
- (id)initWithImage:(id)arg1 shadowImage:(id)arg2;

@end
