//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICSQLiteStatement, NSDictionary;

@interface ICSQLiteRow : NSObject
{
    NSDictionary *_columnIndexByName;
    struct sqlite3_stmt *_statement;
    ICSQLiteStatement *_statementWrapper;
}

- (void).cxx_destruct;
- (int)columnIndexForColumnName:(id)arg1;
- (id)stringForColumnName:(id)arg1;
- (id)stringForColumnIndex:(int)arg1;
@property(readonly, nonatomic) int numberOfColumns;
- (id)numberForColumnName:(id)arg1;
- (id)numberForColumnIndex:(int)arg1;
- (long long)int64ForColumnName:(id)arg1;
- (long long)int64ForColumnIndex:(int)arg1;
- (int)intForColumnName:(id)arg1;
- (int)intForColumnIndex:(int)arg1;
- (double)doubleForColumnName:(id)arg1;
- (double)doubleForColumnIndex:(int)arg1;
- (id)dataForColumnName:(id)arg1;
- (id)dataForColumnIndex:(int)arg1;
- (id)initWithStatement:(id)arg1;

@end

