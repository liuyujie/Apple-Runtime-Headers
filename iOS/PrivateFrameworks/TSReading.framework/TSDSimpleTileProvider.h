//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TSReading/TSDTileProvider.h>

@interface TSDSimpleTileProvider : TSDTileProvider
{
    SEL mAction;
}

@property(nonatomic) SEL action; // @synthesize action=mAction;
- (void)drawTargetInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (_Bool)canTargetDrawInParallel;
- (_Bool)isTargetOpaque;

@end

