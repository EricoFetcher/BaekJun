계수 정렬 알고리즘은 정렬 알고리즘 중에서 가장 빠른 알고리즘의 한 종류다. O(n)의 시간 복잡도를 갖는 만큼 빠르게 정렬을 시킬 수 있다. 메모리를 많이 사용한다는 단점이 존재한다.

배열 중 숫자의 갯수를 세므로 정렬 시 빠르게 할 수 있다.

```c
for(int a = 0; a <num; a++)
{
    scanf("%d", &numbers);
    if (numbers > max)
    {
        max = numbers;
    }
    countings[numbers]++;
}

for(int a = 0; a < max; a++)
{
    if (counings[a] != 0)
    for (int i = 0; i < countings[a]; i++)
    {
        prrintf("%d ", a + 1);
    }
}
```

형태로 코드를 생성함.

3 5 3 4 2 1 3 2 3 0 이라는 10개의 숫자가 있다고 가정해보자.

0이 하나, 1이 하나, 2가 둘, 3이 3개, 4가 하나, 5가 하나가 된다.
