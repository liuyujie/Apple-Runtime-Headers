//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface PDFTileSurface : NSObject
{
    int tileId;
    int pageNumber;
    int tileSize;
    int type;
    struct CGImage *cgImageRef;
    NSDate *recycledDate;
}

- (void).cxx_destruct;

@end
