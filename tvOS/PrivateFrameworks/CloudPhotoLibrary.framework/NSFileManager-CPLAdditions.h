//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFileManager.h"

@interface NSFileManager (CPLAdditions)
- (_Bool)cplFileExistsAtURL:(id)arg1;
- (_Bool)cplIsHardLinkNotPossibleError:(id)arg1;
- (_Bool)cplIsFileDoesNotExistError:(id)arg1;
- (_Bool)cplIsFileExistsError:(id)arg1;
- (_Bool)cplMoveItemAtURL:(id)arg1 toURL:(id)arg2 shouldApplyDataProtection:(_Bool)arg3 error:(id *)arg4;
- (_Bool)cplCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)cplLinkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)cplLinkOrCopyItemAtURL:(id)arg1 toURL:(id)arg2 shouldCopy:(_Bool)arg3 shouldApplyDataProtection:(_Bool)arg4 error:(id *)arg5;
@end

