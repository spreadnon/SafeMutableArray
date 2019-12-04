//
//  SafeMutableArray.h
//  SafeMutableArray
//
//  Created by iOS123 on 2019/12/4.
//  Copyright © 2019 CQL. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SafeMutableArray : NSObject
// 读取数组
- (SafeMutableArray *)array;
//判断是否包含对象
- (BOOL)containsObject:(id)anObject;
//集合元素数量
- (NSUInteger)count;
//获取元素
- (id)objectAtIndex:(NSUInteger)index;
//枚举元素
- (NSEnumerator *)objectEnumerator;
//插入
- (void)insertObject:(id)anObject atIndex:(NSUInteger)index;
//添加
- (void)addObject:(id)anObject;
//移除
- (void)removeObjectAtIndex:(NSUInteger)index;
//移除
- (void)removeObject:(id)anObject;
//移除
- (void)removeLastObject;
//替换
- (void)replaceObjectAtIndex:(NSUInteger)index withObject:(id)anObject;
//获取索引
- (NSUInteger)indexOfObject:(id)anObject;
@end

NS_ASSUME_NONNULL_END
