//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle;

@interface WAOffsetsFile : NSObject
{
    NSFileHandle *_handle;
    unsigned long long *_offsets;
    unsigned long long _lastChangedBlock;
    _Bool _readOnly;
    unsigned long long _maximumCount;
    unsigned long long _count;
}

- (void).cxx_destruct;
- (unsigned long long)blockForIndex:(unsigned long long)arg1;
- (void)closeFile;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)dealloc;
- (id)init;
- (id)initWithHandle:(id)arg1 readOnly:(_Bool)arg2 maximumCount:(unsigned long long)arg3;
- (id)initWithPath:(id)arg1 andCount:(unsigned long long)arg2;
- (id)initWithPath:(id)arg1 readOnly:(_Bool)arg2 maximumCount:(unsigned long long)arg3;
- (id)initWithReadOnlyPath:(id)arg1;
- (id)initWithUpdatablePath:(id)arg1 maximumCount:(unsigned long long)arg2;
- (void)invalidateFromIndex:(unsigned long long)arg1;
- (void)loadBlock:(unsigned long long)arg1;
- (unsigned long long)offsetAtIndex:(unsigned long long)arg1;
- (void)save;
- (void)setOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;

@end
