//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PXPeopleFaceTileImageManager : NSObject
{
    BOOL _concurrencyEnabled;
}

+ (id)sharedManager;
@property(nonatomic, getter=isConcurrencyEnabled) BOOL concurrencyEnabled; // @synthesize concurrencyEnabled=_concurrencyEnabled;
- (void)clearMemoryCache;
- (struct CGRect)_imageFaceRectForFace:(id)arg1;

@end

