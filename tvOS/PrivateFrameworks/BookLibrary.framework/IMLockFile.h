//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IMLockFile : NSObject
{
    int _fd;
    _Bool _locked;
    NSString *_path;
}

+ (id)iTunesSyncLockFilePath;
+ (id)iTunesSyncLockFile;
@property(readonly, nonatomic) _Bool locked; // @synthesize locked=_locked;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)unlock;
- (_Bool)tryLock:(_Bool)arg1;
- (_Bool)lock:(_Bool)arg1;
- (_Bool)_lock:(_Bool)arg1 blocking:(_Bool)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
