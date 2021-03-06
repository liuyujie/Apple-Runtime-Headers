//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface TSCEUndoTract : NSObject <NSCopying>
{
    vector_4dc5f307 _columnUids;
    vector_4dc5f307 _rowUids;
    unsigned char _purpose;
    _Bool _isRangeRef;
    _Bool _preserveRectangularRange;
}

+ (_Bool)p_remapUidVector:(vector_4dc5f307 *)arg1 usingUidMap:(const UUIDMap_b66c2694 *)arg2 clearIfMissing:(_Bool)arg3;
+ (void)saveToArchive:(struct ASTNodeArrayArchive_ASTUidTract *)arg1 columnUids:(const vector_4dc5f307 *)arg2 rowUids:(const vector_4dc5f307 *)arg3 purpose:(unsigned char)arg4 isRangeRef:(_Bool)arg5 preserveRectangularRange:(_Bool)arg6;
+ (id)stringForPurpose:(unsigned char)arg1;
@property(nonatomic) _Bool preserveRectangularRange; // @synthesize preserveRectangularRange=_preserveRectangularRange;
@property(nonatomic) _Bool isRangeRef; // @synthesize isRangeRef=_isRangeRef;
@property(nonatomic) unsigned char purpose; // @synthesize purpose=_purpose;
@property(readonly) vector_4dc5f307 *rowUids; // @synthesize rowUids=_rowUids;
@property(readonly) vector_4dc5f307 *columnUids; // @synthesize columnUids=_columnUids;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)remapUsingColumnUidMap:(const UUIDMap_b66c2694 *)arg1 rowUidMap:(const UUIDMap_b66c2694 *)arg2 clearIfMissing:(_Bool)arg3;
- (_Bool)remapUsingUidMap:(const UUIDMap_b66c2694 *)arg1;
- (void)saveToArchive:(struct ASTNodeArrayArchive_ASTUidTract *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArchive:(const struct ASTNodeArrayArchive_ASTUidTract *)arg1;
- (id)initWithColumnUids:(const vector_4dc5f307 *)arg1 rowUids:(const vector_4dc5f307 *)arg2 purpose:(unsigned char)arg3;
- (id)initWithColumnUid:(const UUIDData_5fbc143e *)arg1 rowUid:(const UUIDData_5fbc143e *)arg2 purpose:(unsigned char)arg3;

@end

