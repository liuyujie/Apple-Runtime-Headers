//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHImageRequestOptions.h>

@interface PHAnimatedImageRequestOptions : PHImageRequestOptions
{
    _Bool _allowPreCaching;
    _Bool _useSharedImageDecoding;
}

@property(nonatomic) _Bool useSharedImageDecoding; // @synthesize useSharedImageDecoding=_useSharedImageDecoding;
@property(nonatomic) _Bool allowPreCaching; // @synthesize allowPreCaching=_allowPreCaching;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

