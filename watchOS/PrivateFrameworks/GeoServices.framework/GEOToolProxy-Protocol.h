//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol GEOToolProxy
- (void)invalidateTileCache;
- (unsigned long long)freePurgableSpace:(unsigned long long)arg1 forUrgency:(int)arg2;
- (unsigned long long)calculatePurgableSpaceForUrgency:(int)arg1;
- (id)getDefault:(NSString *)arg1 source:(int *)arg2;
- (void)lockDBs;
- (void)unlockDBs;
@end

