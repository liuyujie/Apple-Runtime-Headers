//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MDLTextureFilter : NSObject
{
    unsigned int sWrapMode;
    unsigned int tWrapMode;
    unsigned int rWrapMode;
    unsigned int minFilter;
    unsigned int magFilter;
    unsigned int mipFilter;
}

@property(nonatomic) unsigned int mipFilter; // @synthesize mipFilter;
@property(nonatomic) unsigned int magFilter; // @synthesize magFilter;
@property(nonatomic) unsigned int minFilter; // @synthesize minFilter;
@property(nonatomic) unsigned int rWrapMode; // @synthesize rWrapMode;
@property(nonatomic) unsigned int tWrapMode; // @synthesize tWrapMode;
@property(nonatomic) unsigned int sWrapMode; // @synthesize sWrapMode;
- (id)init;

@end
