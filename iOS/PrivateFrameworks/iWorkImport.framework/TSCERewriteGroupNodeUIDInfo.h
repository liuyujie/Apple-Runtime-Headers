//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSCERewriteGroupNodeUIDInfo : NSObject
{
    UUIDData_5fbc143e _groupByUid;
    UUIDMap_b66c2694 _groupNodeUIDMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToMessage:(struct RewriteGroupNodeUIDInfoArchive *)arg1;
- (id)initFromMessage:(const struct RewriteGroupNodeUIDInfoArchive *)arg1;
- (id)description;
- (const UUIDMap_b66c2694 *)groupNodeUIDMap;
- (vector_4dc5f307)originalGroupNodeUIDs;
- (const UUIDData_5fbc143e *)groupByUid;
- (id)initWithGroupByUid:(const UUIDData_5fbc143e *)arg1 groupNodeUIDMap:(const UUIDMap_b66c2694 *)arg2;

@end

