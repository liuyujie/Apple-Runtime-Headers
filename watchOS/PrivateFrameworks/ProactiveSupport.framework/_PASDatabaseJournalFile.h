//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _PASDatabaseJournalFile : NSObject
{
    NSString *_path;
    unsigned long _len;
    unsigned long _readCursor;
    int _fd;
    _Bool _written;
    _Bool _dead;
}

- (void).cxx_destruct;
- (id)description;
- (void)unlink;
- (void)clear;
- (id)read;
@property(readonly, nonatomic) unsigned long length;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isFullyRead;
- (void)write:(id)arg1;
- (void)dealloc;
- (void)destroyAndUnlinkIfEmpty;
- (void)destroy;
- (id)initWithPath:(id)arg1;
- (id)init;

@end

