//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class QTMovie;

__attribute__((visibility("hidden")))
@interface QTTrackEnumerator : NSEnumerator
{
    QTMovie *_movie;
    unsigned int _index;
    long long _reserved1;
    long long _reserved2;
    long long _reserved3;
}

+ (id)trackEnumeratorWithMovie:(id)arg1;
- (id)nextObject;
- (void)dealloc;
- (void)finalize;
- (id)initWithMovie:(id)arg1;
- (void)setMovie:(id)arg1;

@end

