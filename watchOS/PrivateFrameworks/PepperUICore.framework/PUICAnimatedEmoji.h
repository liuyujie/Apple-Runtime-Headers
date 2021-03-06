//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PUICAnimatedEmojiChooser, UIImage;

@interface PUICAnimatedEmoji : NSObject
{
    struct _AnimatedEmojiSpecification _specification;
    int _type;
    NSString *_name;
    UIImage *_animatedImage;
    PUICAnimatedEmojiChooser *_chooser;
    int _animatedEmojiType;
}

+ (id)emojiAssetsBundle;
+ (int)defaultAnimatedEmojiTypeForHearts;
+ (int)defaultAnimatedEmojiTypeForHands;
+ (int)defaultAnimatedEmojiTypeForFaces;
+ (id)sharedInstanceWithAnimatedEmojiType:(int)arg1;
@property(readonly, nonatomic) int animatedEmojiType; // @synthesize animatedEmojiType=_animatedEmojiType;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (struct _AnimatedEmojiSpecification)_specificationForAnimatedEmojiType:(int)arg1;
- (id)_initWithAnimatedEmojiType:(int)arg1;
@property(readonly, nonatomic) UIImage *animatedImage;
- (void)clearCaches;
@property(readonly, nonatomic) PUICAnimatedEmojiChooser *chooser;
- (int)variants;
- (int)frames;

@end

